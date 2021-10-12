using System;
using System.Net;
using System.Diagnostics;
using System.Reflection;
using System.Configuration.Install;
using System.Runtime.InteropServices;

public class Program
{
	public static void Main()
	{
		Console.WriteLine("Hey There From Main()");
		
	}
}

[System.ComponentModel.RunInstaller(true)]
public class Sample : System.Configuration.Install.Installer
{
	
	public override void Uninstall(System.Collections.IDictionary savedState)
	{
			Process.Start("calc.exe");
	}
	
	
	public override string HelpText
	{
	   get
	   {
		  Process.Start("notepad.exe");
		  return "Hello";
		 
	   }
	}
	
}
