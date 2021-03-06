//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/chinthan/Framework/Logger/ConvertCode/OnePoint/Runtime/RecordLibrary/RecordHelpers/BaseRecord.java
//
//  Created by chinthan on 12/2/13.
//

#ifndef _BaseRecord_H_
#define _BaseRecord_H_
#import "RecordType.h"
#import "Attribute.h"

@class JavaIoDataOutputStream;
@class RecordContext;
@protocol IScriptReader;



@interface BaseRecord : NSObject {
 @public
  NSMutableArray *__BaseElements_;
  NSMutableArray *__Elements_;
  int __Length_;
  int __Parent_;
  RecordTypeEnum __Type_;
}

- (NSMutableArray *)getBaseElements;
- (void)setBaseElementsWithRecordElementArray:(NSMutableArray *)value;
- (NSMutableArray *)getElements;
- (void)setElementsWithRecordElementArray:(NSMutableArray *)value;
- (int)getLength;
- (void)setLengthWithInt:(int)value;
- (int)getParent;
- (void)setParentWithInt:(int)value;
- (RecordTypeEnum) getType;
- (void)setTypeWithRecordTypeEnum:(RecordTypeEnum)value;
- (Attribute *)newAttributeWithRecordContext:(RecordContext *)context withIScriptReader:(id<IScriptReader>)reader;
- (BOOL)writeWithJavaIoDataOutputStream:(NSOutputStream *)writer;
- (BOOL)readForElementGroupWithIScriptReader:(id<IScriptReader>)reader withRecordElementArray:(NSMutableArray *)elements;
- (BOOL)writeForElementGroupWithJavaIoDataOutputStream:(NSOutputStream *)writer withRecordElementArray:(NSMutableArray *)elements;
- (id)init;
@end


#endif // _BaseRecord_H_
