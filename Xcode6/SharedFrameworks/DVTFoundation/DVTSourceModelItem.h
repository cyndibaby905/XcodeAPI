

#import <Foundation/Foundation.h>

@class NSMutableArray;

@interface DVTSourceModelItem : NSObject
{
    int _rc;
    NSRange _relativeLocation;
    long long _langId;
    long long _token;
    DVTSourceModelItem *_parent;
    NSMutableArray *_children;
    unsigned int _nodeType:15;
    unsigned int _isOpaque:1;
    unsigned int _dirty:1;
    unsigned int _isBlock:1;
    unsigned int _ignoreToken:1;
    unsigned int _inheritsNodeType:1;
    unsigned int _isIdentifier:1;
    unsigned int _needsAdjustNodeType:1;
    unsigned int _isSimpleToken:1;
    unsigned int _isVolatile:1;
    unsigned int _needToDirtyRightEdges:1;
}

+ (id)sourceModelItemWithRange:(NSRange)arg1 language:(long long)arg2 token:(long long)arg3 nodeType:(short)arg4;
@property NSRange relativeLocation; // @synthesize relativeLocation=_relativeLocation;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(nonatomic) DVTSourceModelItem *parent; // @synthesize parent=_parent;
@property long long token; // @synthesize token=_token;
@property long long langId; // @synthesize langId=_langId;
- (void)enumerateIdentifierItemsInRelativeRange:(NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)clearAdjustedNodeTypes;
- (long long)compare:(id)arg1;
- (id)followingItem;
- (id)precedingItem;
- (id)_lastLeafItem;
- (id)_firstLeafItem;
- (id)nextItem;
- (id)previousItem;
- (BOOL)isAncestorOf:(id)arg1;
- (id)childAdjoiningLocation:(unsigned long long)arg1;
- (id)childEnclosingLocation:(unsigned long long)arg1;
- (id)_childEnclosingLocation:(unsigned long long)arg1;
- (unsigned long long)indexOfChildAtLocation:(unsigned long long)arg1;
- (unsigned long long)indexOfChildAfterLocation:(unsigned long long)arg1;
- (unsigned long long)indexOfChildBeforeLocation:(unsigned long long)arg1;
- (unsigned long long)numberOfChildren;
- (void)addChildrenFromArray:(id)arg1 inRange:(NSRange)arg2;
- (void)addChildren:(id)arg1;
- (void)addChild:(id)arg1;
- (void)assignAllParents:(id)arg1;
- (void)assignParents:(id)arg1;
- (BOOL)isVolatile;
- (void)setVolatile:(BOOL)arg1;
@property BOOL needsAdjustNodeType;
- (BOOL)needToDirtyRightEdges;
- (void)setNeedToDirtyRightEdges:(BOOL)arg1;
- (BOOL)isSimpleToken;
- (void)setIsSimpleToken:(BOOL)arg1;
- (BOOL)inheritsNodeType;
- (void)setInheritsNodeType:(BOOL)arg1;
- (BOOL)ignoreToken;
- (void)setIgnoreToken:(BOOL)arg1;
- (BOOL)dirty;
- (void)setDirty:(BOOL)arg1;
- (BOOL)isIdentifier;
- (short)rawNodeType;
- (BOOL)isOpaque;
- (void)setIsOpaque:(BOOL)arg1;
- (short)nodeType;
- (void)setNodeType:(short)arg1;
- (NSRange)innerRange;
- (void)offsetBy:(long long)arg1;
- (void)setRange:(NSRange)arg1;
- (NSRange)range;
- (id)enclosingBlock;
- (long long)blockDepth;
- (void)setIsBlock:(BOOL)arg1;
- (BOOL)isBlock;
- (void)dirtyRange:(NSRange)arg1 changeInLength:(long long)arg2;
- (void)dirtyRelativeRange:(NSRange)arg1 changeInLength:(long long)arg2;
- (void)validate;
- (id)dumpContext;
- (id)contextArray;
- (id)simpleDescription;
- (id)diffableDescription;
- (NSString *)description;
- (id)innerDescription:(id)arg1 showSelf:(BOOL)arg2;
- (id)initWithRange:(NSRange)arg1 language:(long long)arg2 token:(long long)arg3 nodeType:(short)arg4;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end
