//
//  UIImage+Color.h
//
//  Copyright (c) 2014 Jaesung Jung
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
//  the Software, and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
//  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
//  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

@import UIKit.UIImage;
@import UIKit.UIColor;

@interface UIImage (Color)

/*!
 * Creates and returns an image object representing the specified color.
 *
 * @params color The color object
 *
 * @return A new image object for the specified color.
 */
+ (UIImage *)imageWithColor:(UIColor *)color NS_AVAILABLE_IOS(2_0);

/*!
 * Creates and returns an image object representing the specified cg color.
 *
 * @params color The color object
 *
 * @return A new image object for the specified cg color.
 */
+ (UIImage *)imageWithCGColor:(CGColorRef)cgColor NS_AVAILABLE_IOS(2_0);

/*!
 * Returns a average color object of image palette.
 *
 * @return A average color object of image palette.
 */
- (UIColor *)averageColor NS_AVAILABLE_IOS(2_0);

@end
