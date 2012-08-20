# Silver Sparrow's Logger

Logger library part of my Silver Sparrow framework. Silver Sparrow is a (private) iOS framework that includes several components that enhanced and simplify iOS software development.

## How To

1. Add SSLogger to your workspace
2. Add the framework (libSSLogger.a) to your target's "Build Phases" -> "Link Binary with Libraries"
3. Add "-DSSLogEnabled" flag to your target's "Build Settings" -> "Other C Flags". This will enable the log. Remove this flag in order to turn the log off.
4. Import to all header files where you are going to use the logger

* In order to log with the Information tag
	 SSLog_Info(@"information");
* In order to log with the Error tag
	 SSLog_Error(@"error");
* In order to log with the Warning tag 
	SSLog_Warn(@"warning");

## Important
You can download, use and redistribute this framework. Just keep the copyright information in SSLog.h

Thanks!
