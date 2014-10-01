

#import <Foundation/Foundation.h>

@interface NSPropertyListSerialization (DVTNSPropertyListSerializationAdditions)
+ (BOOL)dvt_writePropertyList:(id)arg1 toURL:(id)arg2 format:(unsigned long long)arg3 error:(id *)arg4;
+ (id)dvt_propertyListWithURL:(id)arg1 options:(unsigned long long)arg2 format:(unsigned long long *)arg3 error:(id *)arg4;
@end

