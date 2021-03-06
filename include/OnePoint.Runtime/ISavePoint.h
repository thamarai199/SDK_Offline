//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/ISavePoint.java
//
//  Created by ashchauhan on 6/20/14.
//


#import <Foundation/Foundation.h>

#import "IQuestion.h"
@protocol ISavePoints;
@class Handler;
@class Cache;

@protocol ISavePoint < NSObject>
- (void)go:(Handler*)handler;
- (NSString *)getLabel;
- (NSString *)getName;
- (id<ISavePoints>)getParent;
- (Handler*)getHandler;
- (id<ISavePoint>)getPrevious;
- (void)setPrevious:(id<ISavePoint>)value;
- (Cache *)getCache;
-(void)setName:(NSString *)value ;
-(BOOL) getIsTemporary;
- (id<IQuestion>)getquestion;
- (void)setquestion:(id<IQuestion>)value;
- (NSString *)getquestionname;
@end

