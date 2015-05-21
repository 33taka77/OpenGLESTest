//
//  SGGSprite.h
//  OpenGLTestFromSingleView
//
//  Created by Aizawa Takashi on 2015/05/21.
//  Copyright (c) 2015年 Aizawa Takashi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GLKit/GLKit.h>

@interface SGGSprite : NSObject
- (id)initWithFile:(NSString *)fileName effect:(GLKBaseEffect *)effect;
- (void)render;

@end
