//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/IQuestions.java
//
//  Created by ashchauhan on 6/20/14.
//

//#ifndef _IQuestions_H_
//#define _IQuestions_H_

#import <Foundation/Foundation.h>

@protocol IQuestion;

@protocol IQuestions < NSObject>
-(id)getfilter ;
-(void)setfilter:(id)value ;
- (void)add:(NSString *)key withIQuestion:(id<IQuestion>)value withIndex:(int)index;
- (void)remove:(int)index;
- (int)getCount;
-(NSArray*)getList;
- (void)add:(NSString *)key withIQuestion:(id<IQuestion>)value;
- (void)clear;
- (BOOL)containsKey:(NSString *)key;
- (BOOL)containsValue:(id<IQuestion>)value;
- (id)getenumerator;
-(id)getenumerator:(id)param;
- (id<IQuestion>)get___idxWithNSString:(NSString *)searchKey;
- (id<IQuestion>)get___idxWithIndex:(int)index;
- (id<IQuestion>)get___idxStandard:(int)index;
- (void)set___idxWithIndex:(int)index withIQuestion:(id<IQuestion>)value;
- (void)set___idxWithNSString:(NSString *)searchKey withIQuestion:(id<IQuestion>)value;
-(NSMutableArray*)getItems ;
-(void)reset;
-(id)getCurrent;

@end

// _IQuestions_H_
