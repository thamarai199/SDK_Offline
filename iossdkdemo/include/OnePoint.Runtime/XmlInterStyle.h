//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Player/Xml/IntermediateControls/XmlInterStyle.java
//
//  Created by ashchauhan on 4/1/14.
//

//#ifndef _OnePointPlayerXmlIntermediateControlsXmlInterStyle_H_
//#define _OnePointPlayerXmlIntermediateControlsXmlInterStyle_H_

@protocol IXmlInterControl;


#import "XmlInterControl.h"
@class XmlInterControlStyle;
@protocol IStyle;
@class OPGStyle;
@interface XmlInterStyle : XmlInterControl {
 @public
  id<IStyle> __Style_;
}
- (id)initWithIXmlInterControl:(id<IXmlInterControl>)parent withStyle:(id<IStyle>)style;
- (id)initWithIXmlInterControl:(id<IXmlInterControl>)parent withStyle:(id<IStyle>)style withStyle:(id<IStyle>)inheritedStyle;
- (id<IStyle>)getStyle;
- (void)setStyle:(id<IStyle>)value;


@end
