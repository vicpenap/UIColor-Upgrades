//
//  UIColor+Upgrades.h
//
//  Created by Víctor on 14/12/11.

// 	Copyright (c) 2012 Víctor Pena Placer (@vicpenap)
// 	http://www.victorpena.es/
// 	
// 	
// 	Permission is hereby granted, free of charge, to any person obtaining a copy 
// 	of this software and associated documentation files (the "Software"), to deal
// 	in the Software without restriction, including without limitation the rights 
// 	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
// 	copies of the Software, and to permit persons to whom the Software is furnished
// 	to do so, subject to the following conditions:
// 	
// 	The above copyright notice and this permission notice shall be included in
// 	all copies or substantial portions of the Software.
// 	
// 	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// 	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
// 	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// 	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// 	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR
// 	IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


#import <Foundation/Foundation.h>

/** This UIColor category improves UIColor by adding four new class methods:

- colorWithHex:
- randomColor
- colorFromSeed:
- blueDetailColor

*/

@interface UIColor (Upgrades)

/** Returns a UIColor instance with the hexadecimal color.

@param hex A color in hexadecimal notation: `0xCCCCCC`, `0xF7F7F7`, etc.

@return A new autoreleased UIColor instance. */
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
