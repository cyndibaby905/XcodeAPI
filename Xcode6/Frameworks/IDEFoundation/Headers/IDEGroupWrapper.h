

#import <IDEFoundation/IDEItemReferenceWrapper.h>

@interface IDEGroupWrapper : IDEItemReferenceWrapper
{
}

- (id)sdefSupport_fileReferenceForPath:(id)arg1;
- (void)insertInGroups:(id)arg1 atIndex:(long long)arg2;
- (void)insertInFileReferences:(id)arg1 atIndex:(long long)arg2;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (id)itemReferences;
- (id)groups;
- (id)fileReferences;

@end

