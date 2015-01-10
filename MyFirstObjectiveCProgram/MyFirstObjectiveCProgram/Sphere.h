//
//  Sphere.h
//  MyFirstObjectiveCProgram
//
//  Created by Will Sentance on 1/9/15.
//  Copyright (c) 2015 treehouse. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Sphere : NSObject {
    NSArray *_center;
    float radius;
}

-(void)setRadius:(float)radius;
-(float)radius;

-(void)setCenter:(NSArray *)center;
-(NSArray *)center;

@end
