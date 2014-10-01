

#import <Foundation/Foundation.h>

@class IDEIndexDatabase;

@interface IDEIndexImportSession : NSObject
{
    IDEIndexDatabase *_database;
    BOOL _wasSaved;
    BOOL _hasEnded;
    void *_cxIndex;
    void *_cxIndexAction;
    void *_resolvedPathMap;
    dispatch_queue_t _resolvedPathQueue;
    NSDate *_startTime;
    long long _nUnits_C;
    long long _nUnits_ObjC;
    long long _nUnits_CXX;
    long long _nUnits_ObjCXX;
    long long _nUnits_Other;
    long long _nPCHs;
    long long _nSymbols;
    long long _nReferences;
}

@property(readonly, nonatomic) void *cxIndexAction; // @synthesize cxIndexAction=_cxIndexAction;
@property(readonly, nonatomic) void *cxIndex; // @synthesize cxIndex=_cxIndex;
@property(readonly, nonatomic) BOOL hasEnded; // @synthesize hasEnded=_hasEnded;
@property(readonly, nonatomic) BOOL wasSaved; // @synthesize wasSaved=_wasSaved;
@property(readonly, nonatomic) IDEIndexDatabase *database; // @synthesize database=_database;
- (void)didEnd;
- (void)recordSymbols:(long long)arg1 references:(long long)arg2;
- (void)recordUnitWithLanguage:(id)arg1 pch:(BOOL)arg2;
- (void)endSession;
- (void)didSave;
- (id)newMainFileWithPath:(id)arg1 target:(id)arg2 source:(id)arg3 modified:(id)arg4;
- (id)initWithDatabase:(id)arg1;
- (void)deletePathMap;
//- (void)setResolvedPath:(id)arg1 forFileID:(CDStruct_3c4b7cd8)arg2;
//- (id)resolvedPathForFileID:(CDStruct_3c4b7cd8)arg1;
- (void)withPathMapDo:(CDUnknownBlockType)arg1;
- (void)createPathMap;

@end

