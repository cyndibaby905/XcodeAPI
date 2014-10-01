

#import <IDEFoundation/IDEScriptingElement.h>

@interface IDEScriptingWrapper : IDEScriptingElement
{
    id _client;
}

+ (id)wrapSingleton:(id)arg1 inWrapper:(Class)arg2 forContainer:(id)arg3 andAccessor:(id)arg4;
+ (id)wrapItems:(id)arg1 inWrapper:(Class)arg2 forContainer:(id)arg3 andAccessor:(id)arg4;
+ (id)wrapItem:(id)arg1 inWrapper:(Class)arg2 forContainer:(id)arg3 andAccessor:(id)arg4;
@property(retain) id client; // @synthesize client=_client;
- (id)objectSpecifier;
- (BOOL)isEqual:(id)other;
- (id)scriptingID;
- (id)name;
- (NSString *)description;

@end

