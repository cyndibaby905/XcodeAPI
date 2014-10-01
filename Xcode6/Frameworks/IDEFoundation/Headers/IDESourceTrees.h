

#import <Foundation/Foundation.h>

@interface IDESourceTrees : NSObject
{
}

+ (BOOL)stringContainsSourceTreeReference:(id)arg1;
+ (id)stringByExpandingSourceTreeReferencesInString:(id)arg1;
+ (Class)sourceTreeProviderClass;

@end

