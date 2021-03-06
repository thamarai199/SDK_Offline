//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/IStyles.java
//
//  Created by ashchauhan on 6/20/14.
//

//#ifndef _IStyles_H_
//#define _IStyles_H_



#import "GridStyleTypes.h"
#import "IStyle.h"
#import "GridStyleTypes.h"

@protocol IStyles < NSObject>
- (void)add:(id<IStyle>)item;
- (NSMutableDictionary*)asReadOnly;
- (int)binarySearch:(int)index withCount:(int)count withIStyle:(id<IStyle>)item
                    withComparator:(id)comparer;
- (int)binarySearch:(id<IStyle>)item;
- (int)binarySearch:(id<IStyle>)item withComparator:(id)comparer;

- (void)clear;
- (BOOL)contains:(id<IStyle>)item;
- (void)copyTo:(NSMutableArray *)array ;
- (void)copyTo:(int)index withIStyleArray:(NSMutableArray *)array withIndex:(int)arrayIndex
              withCount:(int)count ;
- (void)copyTo:(NSMutableArray *)array withIndex:(int)arrayIndex ;

- (BOOL)exists:(id)match;
- (id<IStyle>)find:(id)match;
- (int)findIndex:(id)match;
- (int)findIndex:(int)startIndex withMatch:(id)match;
- (int)findIndex:(int)startIndex withCount:(int)count withMatch:(id)match;
- (id<IStyle>)findLast:(id)match;
- (int)findLastIndex:(id)match;
- (int)findLastIndex:(int)startIndex withMatch:(id)match;

- (int)findLastIndex:(int)startIndex  withCount:(int)count withMatch:(id)match;

- (void)forEach:(id)action;
- (int)indexOf:(id<IStyle>)item;
- (int)indexOf:(id<IStyle>)item withIndex:(int)index;
- (int)indexOf:(id<IStyle>)item withIndex:(int)index withCount:(int)count;

- (void)insert:(int)index withIStyle:(id<IStyle>)item;
- (void)insertRange:(int)index withCollection:(id)collection;
- (int)lastIndexOf:(id<IStyle>)item;
- (int)lastIndexOf:(id<IStyle>)item withIndex:(int)index;

- (int)lastIndexOf:(id<IStyle>)item withIndex:(int)index withCount:(int)count;

- (BOOL)remove:(id<IStyle>)item;
- (int)removeAll:(id)match;
- (void)removeAt:(int)index;
- (void)removeRange:(int)index withCount:(int)count;

- (void)reverse;
- (void)reverse:(int)index withCount:(int)count;

- (void)sort;
- (void)sort:(id)comparer;
- (void)sort:(int)index withCount:(int)count withComparator:(id)comparer;
- (NSMutableArray *)toStylesArray;
- (void)trimExcess;
- (BOOL)trueForAll:(id)match;
- (int)getCapacity;
- (void)setCapacity:(int)value;
- (int)getCount;
- (id<IStyle>)get___idxwithint:(NSNumber *)index;
- (id<IStyle>)get___idxwithlabels:(NSNumber *)index;
- (void)set___idx:(int)index withIStyle:(id<IStyle>)value;
- (id<IStyle>)get___idxWithGridStyleTypes:(GridStyleTypesEnum)index;
- (void)set___idxWithGridStyleTypes:(GridStyleTypesEnum) index withIStyle:(id<IStyle>)value ;

@end

// _IStyles_H_
