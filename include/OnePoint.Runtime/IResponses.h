//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/IResponses.java
//
//  Created by ashchauhan on 6/20/14.
//

//#ifndef _IResponses_H_
//#define _IResponses_H_


@protocol IOMIResponse;



@protocol IResponses < NSObject>
- (void)addResponses:(id<IOMIResponse>)item;
- (void)addRange:(id)collection;
- (id)asReadOnly;
- (int)binarySearch:(int)index
                   withInt:(int)count withIResponse:(id<IOMIResponse>)item withComparator:(id)comparer;
- (int)binarySearch:(id<IOMIResponse>)item;
- (int)binarySearch:(id<IOMIResponse>)item withComparator:(id)comparer;
- (void)clear;
- (BOOL)contains:(id<IOMIResponse>)item;
- (void)copyTo:( NSMutableArray*)array;
- (void)copyTo:(int)index withIResponseArray:(NSMutableArray *)array withIndex:(int)arrayIndex
              withCount:(int)count ;
- (void)copyTo:(NSMutableArray *)array withIndex:(int)arrayIndex;
- (BOOL)exists:(id)match;
- (id<IOMIResponse>)find:(id)match;
- (NSMutableArray*)findAll:(id)match;
- (int)findIndex:(id)match;
- (int)findIndex:(int)startIndex withMatch:(id)match;
- (int)findIndex:(int)startIndex withCount:(int)count withMatch:(id)match;
- (id<IOMIResponse>)findLastWithId:(id)match;
- (int)findLastIndex:(id)match;
- (int)findLastIndex:(int)startIndex withMatch:(id)match;
- (int)findLastIndex:(int)startIndex withCount:(int)count withMatch:(id)match;
- (void)forEachWithId:(id)action;
- (id)getEnumerator;
- (NSMutableArray*)getRange:(int)index withCount:(int)count;
- (int)indexOf:(id<IOMIResponse>)item;
- (int)indexOf:(id<IOMIResponse>)item withIndex:(int)index;
- (int)indexOf:(id<IOMIResponse>)item withIndex:(int)index withCount:(int)count;

- (void)insert:(int)index withIResponse:(id<IOMIResponse>)item;
- (void)insertRange:(int)index withCollection:(id)collection;
- (int)lastIndexOf:(id<IOMIResponse>)item;
- (int)lastIndexOf:(id<IOMIResponse>)item withIndex:(int)index;
- (int)lastIndexOf:(id<IOMIResponse>)item withIndex:(int)index  withCount:(int)count;
- (id)getDefaultValue;
- (BOOL)remove:(id<IOMIResponse>)item;
- (int)removeAll:(id)match;
- (void)removeAt:(int)index;
- (void)removeRange:(int)index withCount:(int)count;
- (void)reverse;
- (void)reverse:(int)index withCount:(int)count;
- (void)sort;
- (void)sort:(id)comparer;
- (void)sort:(int)index withCount:(int)count withComparator:(id)comparer;
- (void)sortWithId:(id)comparison;
- (NSMutableArray *)toArray;
- (void)trimExcess;
- (BOOL)trueForAll:(id)match;
- (int)getCapacity;
- (void)setCapacity:(int)value;
- (int)getCount;
- (id<IOMIResponse>)get___idx:(int)index;
- (void)set___idx:(int)index withIResponse:(id<IOMIResponse>)value;
@end

// _IResponses_H_
