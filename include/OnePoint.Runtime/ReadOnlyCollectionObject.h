//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nitin/Framework/Logger/ConvertCode/OnePoint/Runtime/Common/Helpers/ReadOnlyCollectionObject.java
//
//  Created by nitin on 1/15/14.
//


#import "IReadOnlyCollectionObject.h"

@interface ReadOnlyCollectionObject : NSMutableDictionary < IReadOnlyCollectionObject > {
 @public
  NSMutableArray *list_;
}

- (NSMutableArray *)getList;
- (void)setListWithNSMutableArray:(NSMutableArray *)value;
- (id)itemWithId:(id)index;
- (void)addWithId:(id)key
           withId:(id)value;
- (void)addWithId:(id)key
           withId:(id)value
          withInt:(int)index;
- (void)removeWithInt:(int)index;
- (id)init;

@end


