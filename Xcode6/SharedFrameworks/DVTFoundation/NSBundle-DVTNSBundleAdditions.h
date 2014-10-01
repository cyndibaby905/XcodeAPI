

#import <Foundation/Foundation.h>

@class DVTPlatform, NSString;

@interface NSBundle (DVTNSBundleAdditions)
+ (id)_uncachedValueForKey:(struct __CFString *)arg1 atURL:(id)arg2;
+ (id)_uncachedBundleStringForKey:(struct __CFString *)arg1 AtURL:(id)arg2;
+ (id)dvt_uncachedExtensionInfoAtPath:(id)arg1;
+ (id)dvt_uncachedBundleExecutableAtPath:(id)arg1;
+ (id)dvt_uncachedBundleIdentifierAtPath:(id)arg1;
+ (id)dvt_uncachedBundleExecutableAtURL:(id)arg1;
+ (id)dvt_uncachedBundleIdentifierAtURL:(id)arg1;
@property(readonly, nonatomic) NSString *dvt_contentsPath;
@property(readonly, nonatomic) DVTPlatform *dvt_platform;
@end

