

#import <Foundation/Foundation.h>

@interface IDEScriptingElement : NSObject
{
    id _container;
    id _accessor;
}

@property(retain) id accessor; // @synthesize accessor=_accessor;
@property(retain) id container; // @synthesize container=_container;
- (id)objectSpecifier;
- (id)objectSpecifierAsProperty;
- (id)objectSpecifierByIndex;
- (id)objectSpecifierByName:(id)arg1;
- (id)objectSpecifierByID:(id)arg1;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (void)setScriptingID:(id)arg1;
- (void)setName:(id)arg1;
- (NSString *)description;

@end

