//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Player/IPlayer.java
//
//  Created by ashchauhan on 3/11/14.
//
#import <Foundation/Foundation.h>
#import "IQuestion.h"
#import "Interview.h"
#import "Container.h"


@protocol IPlayer < NSObject>

-(void)initializeWithInterview:(Interview*) interview withContaier:(Container*)resourceContainer  withType:(int)renderType;
-(int)ask:(id<IQuestion>) question;
-(int)ask;
-(id)show:(id<IQuestion>) question;
- (NSString *)getName;
-(BOOL)validate;
-(void)updateContext:(id)context;
-(BOOL) getPostBackRequired;
-(NSData*)checkForResource:(NSString*)name;
-(void)setGoto:(NSString*)value;
-(NSString*)getGoto;
@end


