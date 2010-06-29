/**
 * Appcelerator Titanium Mobile
 * This is generated code. Do not modify. Your changes will be lost.
 * Generated code is Copyright (c) 2009 by Appcelerator, Inc.
 * All Rights Reserved.
 */
#import <Foundation/Foundation.h>

@protocol TitaniumAppAssetResolver
- (NSData*) resolveAppAsset:(NSURL*)url;
- (oneway void)release;
- (id)retain;
@end

@interface ApplicationRouting : NSObject<TitaniumAppAssetResolver> {
}
- (NSData*) resolveAppAsset:(NSURL*)url;
- (NSData*) styleNamedIndex;
- (NSData*) pageNamedIndex;
- (NSData*) scriptNamedIndex;
- (NSData*) pageNamedIndex_1;
- (NSData*) pageNamedView;
- (NSData*) pageNamedView1;
- (NSData*) pageNamedView2;
- (NSData*) pageNamedView2_1;
- (NSData*) pageNamedView5;
- (NSData*) pageNamedView7;
- (NSData*) pageNamedView8;
- (NSData*) pageNamedView9;

@end
