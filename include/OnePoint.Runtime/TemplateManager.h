//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Player/Web/Templates/TemplateManager.java
//
//  Created by ashchauhan on 3/11/14.
//

//#ifndef _TemplateManager_H_
//#define _TemplateManager_H_

#import <Foundation/Foundation.h>

#import "TemplateTypes.h"
//#import "Page.h"
//#import "WebApplication.h"
@class Container;
@class Page;
@protocol IQuestion;

@interface TemplateManager : NSObject {
 @public
  NSString *__BannerTemplate_;
  NSString *__ErrorTemplate_;
  NSString *__GridTemplate_;
  NSString *__LayoutTemplate_;
  NSString *__NavBarTemplate_;
  NSString *__QuestionTemplate_;
    NSDictionary *defaultTemplates;
     NSDictionary *templateCodes;
    Container *_resources;
    NSMutableDictionary *__templates;
    NSMutableDictionary *__interview;
}
-(id)initWithContainer:(Container*)resources withPage:(Page*)page;
- (NSString *)getBannerTemplate;
- (void)setBannerTemplate:(NSString *)value;
- (NSString *)getErrorTemplate;
- (void)setErrorTemplate:(NSString *)value;
- (NSString *)getGridTemplate;
- (void)setGridTemplate:(NSString *)value;
- (NSString *)getLayoutTemplate;
- (void)setLayoutTemplate:(NSString *)value;
- (NSString *)getNavBarTemplate;
- (void)setNavBarTemplate:(NSString *)value;
- (NSString *)getQuestionTemplate;
- (void)setQuestionTemplate:(NSString *)value;
- (NSString *)defaultTemplateName:(TemplateTypes)templateType;
- (NSString *)loadDefaultTemplate:(TemplateTypes)templateType;
-(NSString*)loadTemplate:(TemplateTypes)templateType withContainer:(Container*)resources withGlobalName:(NSString*)globalName withLocalName:(NSString*)localName;
-(NSString*)getTemplate:(TemplateTypes)type withName:(NSString*)name;
-(NSString*)getTemplate:(TemplateTypes)type withName:(NSString*)name withBool:(BOOL)pageLevel;
-(NSString*)getTemplateName:(TemplateTypes)type withName:(NSString*)name;
-(void)update:(Page*)page;
@end
//#endif // _TemplateManager_H_
