//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/QuestionEnumerator.java
//
//  Created by ashchauhan on 6/20/14.
//

//#ifndef _QuestionEnumerator_H_
//#define _QuestionEnumerator_H_


@protocol IQuestions;




@interface QuestionEnumerator : NSObject {
 @public
  int pointer_;
  NSMutableArray *questions_;
}

- (id)initWithIQuestions:(id<IQuestions>)questions withNSString:(NSString *)selection;
- (BOOL)moveNext;
- (void)reset;
- (id)getCurrent;
@end
