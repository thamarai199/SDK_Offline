//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/CategoryStyles.java
//
//  Created by ashchauhan on 6/20/14.
//

//#ifndef _CategoryStyles_H_
//#define _CategoryStyles_H_
#import <Foundation/Foundation.h>
#import "ICategoryStyles.h"
#import "CategoryStyleTypes.h"
#import "CollectionObject.h"


@interface CategoryStyles : CollectionObject<ICategoryStyles> {
   
    
}
@property(nonatomic,strong)NSMutableArray *categoryStylesArray;
- (id)init;
-(void)addWithICategoryStyle:(id<ICategoryStyle>) item;
-(void)addObject:(id)value;
-(id<ICategoryStyle>)getByIndex:(int)index;

@end
