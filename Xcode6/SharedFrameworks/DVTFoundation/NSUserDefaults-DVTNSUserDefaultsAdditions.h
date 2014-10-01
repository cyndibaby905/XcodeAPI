

#import <Foundation/Foundation.h>

@interface NSUserDefaults (DVTNSUserDefaultsAdditions)
- (void)dvt_setFilePath:(id)arg1 forKey:(id)arg2;
- (id)dvt_filePathForKey:(id)arg1;
- (BOOL)dvt_objectIsChangedForKey:(id)arg1;
- (id)dvt_objectForKey:(id)arg1 inVolatileDomainForName:(id)arg2;
@end

