//
//  UIColor+Upgrades.m
//
//  Created by Víctor on 14/12/11.
//  Copyright (c) 2011 Víctor Pena Placer. All rights reserved.
//

#import "UIColor+Upgrades.h"

#define CUSTOM_DETAILED_LABEL_COLOR_R	56.0
#define CUSTOM_DETAILED_LABEL_COLOR_G	84.0
#define CUSTOM_DETAILED_LABEL_COLOR_B	135.0



@implementation UIColor (Upgrades)

+ (UIColor *) blueDetailColor {
    float R = CUSTOM_DETAILED_LABEL_COLOR_R/255.0;
    float G = CUSTOM_DETAILED_LABEL_COLOR_G/255.0;
    float B = CUSTOM_DETAILED_LABEL_COLOR_B/255.0;
    
    return [UIColor colorWithRed:R green:G blue:B alpha:1.0];
}

// http://stackoverflow.com/questions/1560081/how-can-i-create-a-uicolor-from-a-hex-string
+ (UIColor *) colorWithHex:(int)hex {
    return [UIColor colorWithRed:((float)((hex & 0xFF0000) >> 16))/255.0
                           green:((float)((hex & 0xFF00) >> 8))/255.0 
                            blue:((float)(hex & 0xFF))/255.0 alpha:1.0];
}


// http://stackoverflow.com/questions/6628049/how-get-a-random-uicolor-but-restrict-it-to-subset-of-the-colors
+ (UIColor *) randomColor {
    float r = arc4random() % 12;
           
    return [UIColor colorWithHue:(30*r)/360.0f saturation:0.5f brightness:0.8f alpha:1.0f];
}

+ (UIColor *) colorFromSeed:(int)seed {
    if (seed) {
        float r = seed;
        while (r > 1) {
            r = r/10;
        }
        
        return [UIColor colorWithHue:r saturation:0.5f brightness:0.8f alpha:1.0f];
    }
    else {
        return [UIColor randomColor];
    }
}


@end
