/*
 Licensed to the Apache Software Foundation (ASF) under one
 or more contributor license agreements.  See the NOTICE file
 distributed with this work for additional information
 regarding copyright ownership.  The ASF licenses this file
 to you under the Apache License, Version 2.0 (the
 "License"); you may not use this file except in compliance
 with the License.  You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing,
 software distributed under the License is distributed on an
 "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 KIND, either express or implied.  See the License for the
 specific language governing permissions and limitations
 under the License.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "OPGPluginResult.h"
#import "NSMutableArray+QueueAdditions.h"
#import "OPGCommandDelegate.h"

extern NSString* const CDVPageDidLoadNotification;
extern NSString* const CDVPluginHandleOpenURLNotification;
extern NSString* const CDVPluginResetNotification;
extern NSString* const CDVLocalNotification;
extern NSString* const CDVRemoteNotification;
extern NSString* const CDVRemoteNotificationError;

@interface OPGPlugin : NSObject {}

@property (nonatomic, weak) UIWebView* webView;
@property (nonatomic, weak) UIViewController* viewController;
@property (nonatomic, weak) id <OPGCommandDelegate> commandDelegate;

@property (readonly, assign) BOOL hasPendingOperation;

- (OPGPlugin*)initWithWebView:(UIWebView*)theWebView;
- (void)pluginInitialize;

- (void)handleOpenURL:(NSNotification*)notification;
- (void)onAppTerminate;
- (void)onMemoryWarning;
- (void)onReset;
- (void)dispose;

/*
 // see initWithWebView implementation
 - (void) onPause {}
 - (void) onResume {}
 - (void) onOrientationWillChange {}
 - (void) onOrientationDidChange {}
 - (void)didReceiveLocalNotification:(NSNotification *)notification;
 */

- (id)appDelegate;

- (NSString*)writeJavascript:(NSString*)javascript CDV_DEPRECATED(3.6, "Use the CDVCommandDelegate equivalent of evalJs:. This will be removed in 4.0.0");

- (NSString*)success:(OPGPluginResult*)pluginResult callbackId:(NSString*)callbackId CDV_DEPRECATED(3.6, "Use the CDVCommandDelegate equivalent of sendPluginResult:callbackId. This will be removed in 4.0.0");

- (NSString*)error:(OPGPluginResult*)pluginResult callbackId:(NSString*)callbackId CDV_DEPRECATED(3.6, "Use the CDVCommandDelegate equivalent of sendPluginResult:callbackId. This will be removed in 4.0.0");

@end
