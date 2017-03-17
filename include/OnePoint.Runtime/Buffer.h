//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nitin/Framework/Logger/ConvertCode/OnePoint/Runtime/Expressions/Parser/Buffer.java
//
//  Created by nitin on 3/21/14.
//




#define Buffer_EOF 65536
#define Buffer_MAX_BUFFER_LENGTH 65536
#define Buffer_MIN_BUFFER_LENGTH 1024

@interface Buffer : NSObject {
 @public
  uint8_t buf_[1024];
  int bufStart_;
  unsigned int bufLen_;
  int fileLen_;
  int bufPos_;
  NSInputStream *stream_;
  NSFileHandle *file;
}

+ (int)getEOF;
- (id)initWithJavaIoInputStream:(NSInputStream *)s withData:(NSData*)byteData;
- (id)initWithNSString:(NSString *)fileName;
- (id)initWithBuffer:(Buffer *)b;
- (void)dealloc;
- (void)Close;
- (int)Read;
- (int)Peek;
- (NSString *)GetStringWithInt:(int)beg
                       withInt:(int)end;
- (int)getPos;
- (void)setPosWithInt:(int)value;
- (int)ReadNextStreamChunk;
@end

