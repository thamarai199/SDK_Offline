//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/StandardTexts.java
//
//  Created by ashchauhan on 6/20/14.
//

//#ifndef _StandardTexts_H_
//#define _StandardTexts_H_



#import "IStandardTexts.h"

@interface StandardTexts : NSObject < IStandardTexts > {
 @public
  NSString *__EndOfInterview_;
  NSString *__InterviewStopped_;
}

- (NSString *)getEndOfInterview;
- (void)setEndOfInterview:(NSString *)value;
- (NSString *)getInterviewStopped;
- (void)setInterviewStopped:(NSString *)value;
- (id)init;

@end