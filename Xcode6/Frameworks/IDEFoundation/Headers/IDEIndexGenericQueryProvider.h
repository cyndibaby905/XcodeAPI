

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEIndexQueryProvider-Protocol.h>

@class DVTFilePath, IDEIndexDatabase, NSDictionary, NSString;

@interface IDEIndexGenericQueryProvider : NSObject <IDEIndexQueryProvider>
{
    IDEIndexDatabase *_db;
    NSDictionary *_settings;
    DVTFilePath *_mainFilePath;
    NSString *_target;
    NSDictionary *_coveredFiles;
    double _lastAccess;
}

+ (BOOL)supportsSymbolColoring;
+ (id)locationForURL:(id)arg1 locator:(id)arg2;
@property(retain, nonatomic) NSDictionary *coveredFiles; // @synthesize coveredFiles=_coveredFiles;
@property(copy, nonatomic) NSString *target; // @synthesize target=_target;
@property(copy, nonatomic) DVTFilePath *mainFilePath; // @synthesize mainFilePath=_mainFilePath;
@property double lastAccess; // @synthesize lastAccess=_lastAccess;
@property(readonly, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) IDEIndexDatabase *database; // @synthesize database=_db;
- (id)definitionsForSymbolWithResolutionOffset:(long long)arg1;
- (id)allAutoImportCompletionItemsMatchingKind:(id)arg1 symbolLanguage:(id)arg2 forIndex:(id)arg3;
- (id)allAutoImportCompletionItemsMatchingKind:(id)arg1 forIndex:(id)arg2;
- (id)completionStringForSymbol:(id)arg1;
- (BOOL)isProjectSymbol:(id)arg1;
- (id)calleesForSymbolOccurrence:(id)arg1;
- (id)locationForSymbolOccurrence:(id)arg1;
- (id)containingSymbolForOccurrence:(id)arg1;
- (id)correspondingSymbolForOccurrence:(id)arg1;
- (id)relatedClassForCategory:(id)arg1;
- (id)propertiesForCategory:(id)arg1;
- (id)instanceVariablesForCategory:(id)arg1;
- (id)instanceMethodsForCategory:(id)arg1;
- (id)classMethodsForCategory:(id)arg1;
- (id)allImplementingClassesForProtocol:(id)arg1;
- (id)implementingClassesForProtocol:(id)arg1;
- (id)subProtocolsForProtocol:(id)arg1;
- (id)allSuperProtocolsForProtocol:(id)arg1;
- (id)superProtocolsForProtocol:(id)arg1;
- (id)propertiesForProtocol:(id)arg1;
- (id)instanceMethodsForProtocol:(id)arg1;
- (id)classMethodsForProtocol:(id)arg1;
- (id)allInterfacesForClass:(id)arg1;
- (id)interfacesForClass:(id)arg1;
- (id)allProtocolsForClass:(id)arg1;
- (id)protocolsForClass:(id)arg1;
- (id)allOccurrencesOfMembers:(id)arg1 forClass:(id)arg2;
- (id)allSubClassesForClass:(id)arg1;
- (id)subClassesForClass:(id)arg1;
- (id)allSuperClassesForClass:(id)arg1;
- (id)superClassesForClass:(id)arg1;
- (id)categoriesForClass:(id)arg1;
- (id)ibOutletCollectionPropertiesForClass:(id)arg1;
- (id)ibOutletCollectionVariablesForClass:(id)arg1;
- (id)ibOutletCollectionsForClass:(id)arg1;
- (id)ibOutletPropertiesForClass:(id)arg1;
- (id)ibOutletVariablesForClass:(id)arg1;
- (id)ibOutletsForClass:(id)arg1;
- (id)ibActionMethodsForClass:(id)arg1;
- (id)propertiesForClass:(id)arg1;
- (id)instanceVariablesForClass:(id)arg1;
- (id)classVariablesForClass:(id)arg1;
- (id)instanceMethodsForClass:(id)arg1;
- (id)classMethodsForClass:(id)arg1;
- (id)childrenForContainer:(id)arg1;
- (id)getterForProperty:(id)arg1;
- (id)setterForProperty:(id)arg1;
- (id)callsForCallable:(id)arg1 cancelWhen:(CDUnknownBlockType)arg2;
- (id)typeOfArgument:(unsigned long long)arg1 forCallable:(id)arg2;
- (unsigned long long)numArgumentsForCallable:(id)arg1;
- (id)returnTypeForCallable:(id)arg1;
- (id)propertyForCallable:(id)arg1;
- (id)overridingSymbolsForCallable:(id)arg1;
- (id)overriddenSymbolsForCallable:(id)arg1;
- (id)referencesForSymbol:(id)arg1;
- (id)referencingFilesForSymbol:(id)arg1;
- (id)containerSymbolForSymbol:(id)arg1;
- (id)containerSymbolsForSymbol:(id)arg1;
- (id)definitionsForSymbol:(id)arg1;
- (id)declarationsForSymbol:(id)arg1;
- (id)occurrencesForSymbol:(id)arg1;
- (id)modelOccurrenceForSymbol:(id)arg1;
- (id)filesWithSymbolOccurrencesMatchingName:(id)arg1 kind:(id)arg2 forIndex:(id)arg3;
- (id)classesWithReferencesToSymbols:(id)arg1 forIndex:(id)arg2;
- (id)allClassesWithMembers:(id)arg1 forIndex:(id)arg2;
- (id)classesWithMembers:(id)arg1 forIndex:(id)arg2;
- (id)allMethodsMatchingMethod:(id)arg1 forReceiver:(id)arg2 forIndex:(id)arg3;
- (id)membersMatchingName:(id)arg1 kinds:(id)arg2 forInterfaces:(id)arg3 forIndex:(id)arg4;
- (id)membersMatchingKinds:(id)arg1 forInterfaces:(id)arg2 forIndex:(id)arg3;
- (id)symbolsForResolutions:(id)arg1 forIndex:(id)arg2;
- (unsigned long long)countOfSymbolsMatchingKind:(id)arg1 workspaceOnly:(BOOL)arg2 forIndex:(id)arg3;
- (id)allSymbolsMatchingKind:(id)arg1 workspaceOnly:(BOOL)arg2 cancelWhen:(CDUnknownBlockType)arg3 forIndex:(id)arg4;
- (id)testMethodsForClasses:(id)arg1 forIndex:(id)arg2;
- (id)allSubClassesForClasses:(id)arg1 forIndex:(id)arg2;
- (id)allSymbolsMatchingNames:(id)arg1 kind:(id)arg2 forIndex:(id)arg3;
- (id)allSymbolsMatchingName:(id)arg1 kind:(id)arg2 forIndex:(id)arg3;
- (id)allProtocolsMatchingName:(id)arg1 forIndex:(id)arg2;
- (id)allClassesMatchingName:(id)arg1 forIndex:(id)arg2;
- (id)symbolsContaining:(id)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5 cancelWhen:(CDUnknownBlockType)arg6 forIndex:(id)arg7;
- (id)topLevelProtocolsWorkspaceOnly:(BOOL)arg1 cancelWhen:(CDUnknownBlockType)arg2 forIndex:(id)arg3;
- (id)topLevelClassesWorkspaceOnly:(BOOL)arg1 cancelWhen:(CDUnknownBlockType)arg2 forIndex:(id)arg3;
- (id)filesContaining:(id)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5 cancelWhen:(CDUnknownBlockType)arg6 forIndex:(id)arg7;
- (id)filesIncludedByFile:(id)arg1 forIndex:(id)arg2;
- (id)filesIncludingFile:(id)arg1 forIndex:(id)arg2;
- (id)impliedHeadersForModuleImportLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)importedFileAtDocumentLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)importedFilesAtDocument:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)collectionElementTypeSymbolForSymbol:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)typeSymbolForSymbol:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)messageReceiverInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)referencesToSymbolMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4;
- (id)referencesToSymbol:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4;
- (id)symbolsUsedInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)symbolsOccurrencesInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)codeDiagnosticsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)codeCompletionsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 completionContext:(id *)arg3 forIndex:(id)arg4;
- (id)parsedCodeCommentAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)symbolsMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4;
- (id)symbolsMatchingName:(id)arg1 inContext:(id)arg2 forIndex:(id)arg3;
- (id)allParentsOfSymbols:(id)arg1 cancelWhen:(CDUnknownBlockType)arg2 forIndex:(id)arg3;
- (id)topLevelSymbolsInFile:(id)arg1 forIndex:(id)arg2;
@property(readonly, nonatomic) BOOL hasAST; // @dynamic hasAST;
@property(readonly, nonatomic) NSString *pchFile; // @dynamic pchFile;
@property(readonly, nonatomic) NSString *mainFile;
- (void)purgeCaches;
- (id)initWithSettings:(id)arg1 database:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
