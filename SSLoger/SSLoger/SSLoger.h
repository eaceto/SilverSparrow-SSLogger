//
//  SSLog.h
//  SSLog
//
//  Created by Ezequiel Aceto on 8/20/12.
//  Copyright (c) 2012 Ezequiel Aceto. All rights reserved.
//  www.ezequielaceto.com.ar

#import <Foundation/Foundation.h>

#ifdef SSLogEnabled

#define SSLog_Error(message) NSLog(@"{ERROR} [%@ %@] %@", NSStringFromClass([self class]), NSStringFromSelector(_cmd), message);
#define SSLog_Info(message) NSLog(@"{INFO} [%@ %@] %@", NSStringFromClass([self class]), NSStringFromSelector(_cmd), message);
#define SSLog_Warn(message) NSLog(@"{WARN} [%@ %@] %@", NSStringFromClass([self class]), NSStringFromSelector(_cmd), message);

#else

#define SSLog_Error(message) /*Silver Sparrow - Logger disabled on Error*/
#define SSLog_Info(message)  /*Silver Sparrow - Logger disabled on Info*/
#define SSLog_Warn(message)  /*Silver Sparrow - Logger disabled on Warning*/

#endif