//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/chinthan/Framework/Logger/ConvertCode/OnePoint/Runtime/VirtualMachine/Core/CodeAttribute.java
//
//  Created by chinthan on 12/2/13.
//

#import <Foundation/Foundation.h>
#import "Attribute.h"

@interface CodeAttribute : Attribute {
 @public
  NSMutableArray *__Attributes_;
  NSMutableData *__Code_;
  NSMutableArray *__ExceptionTable_;
  short int __MaxLocals_;
  short int __MaxStack_;
}

- (id)init;
- (id)initWithShort:(short int)index;
- (NSMutableArray *)getAttributes;
- (void)setAttributesWithAttributeArray:(NSMutableArray *)value;
- (NSMutableData *)getCode;
- (void)setCodeWithByteArray:(NSMutableData *)value;
- (NSMutableArray *)getExceptionTable;
- (void)setExceptionTableWithExceptionTableArray:(NSMutableArray *)value;
- (short int)getMaxLocals;
- (void)setMaxLocalsWithShort:(short int)value;
- (short int)getMaxStack;
- (void)setMaxStackWithShort:(short int)value;
@end


