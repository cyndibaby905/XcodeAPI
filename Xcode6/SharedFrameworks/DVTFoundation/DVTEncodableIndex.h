

#import <Foundation/Foundation.h>

@protocol DVTEncodableIndexDelegate;

@interface DVTEncodableIndex : NSObject
{
    NSMutableDictionary *_identifiersToEntries;
    NSLock *_indexLock;
    id <DVTEncodableIndexDelegate> _delegate;
}

@property(nonatomic) __weak id <DVTEncodableIndexDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_primitiveRemoveItemForIdentifier:(id)arg1;
- (void)_lockIndexDuringBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemsWithBlock:(CDUnknownBlockType)arg1;
- (id)allIdentifiers;
- (void)removeItemsForIdentifiers:(id)arg1;
- (void)setItem:(id)arg1 forIdentifier:(id)arg2 withTimestamp:(double)arg3;
- (id)itemForIdentifier:(id)arg1;
- (id)plistRepresentation;
- (void)loadIndexFromFile:(id)arg1 validationBlock:(CDUnknownBlockType)arg2;
- (BOOL)writeToFile:(id)arg1 error:(id *)arg2;
- (id)init;

@end

