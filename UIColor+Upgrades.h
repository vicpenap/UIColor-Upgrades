//
//  UIColor+Upgrades.h
//
//  Created by Víctor on 14/12/11.
//  Copyright (c) 2011 Víctor Pena Placer. All rights reserved.
//

#import <Foundation/Foundation.h>

/** This UIColor category improves UIColor by adding four new class methods:

- colorWithHex:(int)hex
- randomColor
- colorFromSeed:(int)seed
- blueDetailColor

*/

@interface UIColor (Upgrades)

/** Returns a UIColor instance with the hexadecimal color.

@param hex 
A color in hexadecimal notation: `0xCCCCCC`, `0xF7F7F7`, etc.

@return
A new autoreleased UIColor instance. */
+ (UIColor *) colorWithHex:(int)hex;

/** Returns a new autoreleased UIColor instance with a random color, 
restricted to a subset of pastel colors. */
+ (UIColor *) randomColor;

/** Returns a new autoreleased UIColor instance with a color obtained 
from the given seed.

This might be useful when needing arbitrary colors associated with a given
code. */
+ (UIColor *) colorFromSeed:(int)seed;

/** Returns the blue color seen in detail labels in table views. */
+ (UIColor *) blueDetailColor;

@end
