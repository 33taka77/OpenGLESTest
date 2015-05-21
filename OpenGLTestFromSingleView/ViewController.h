//
//  ViewController.h
//  OpenGLTestFromSingleView
//
//  Created by Aizawa Takashi on 2015/05/21.
//  Copyright (c) 2015年 Aizawa Takashi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@interface ViewController : GLKViewController{
    GLuint vertexBufferID;
    float _curRed;
    BOOL _increasing;
}

@property (nonatomic,strong) GLKBaseEffect* baseEffect;
@end

