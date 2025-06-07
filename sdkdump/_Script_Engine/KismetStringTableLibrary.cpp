#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "KismetStringTableLibrary.hpp"
void* _Script_Engine::KismetStringTableLibrary::GetMetaDataIdsFromStringTableEntry(void* TableId, void* Key) {
    return;
}
void* _Script_Engine::KismetStringTableLibrary::GetTableEntryMetaData(void* TableId, void* Key, void* MetaDataId) {
    return;
}
void* _Script_Engine::KismetStringTableLibrary::GetTableEntrySourceString(void* TableId, void* Key) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::KismetStringTableLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.KismetStringTableLibrary");
    return result;
}
bool _Script_Engine::KismetStringTableLibrary::IsRegisteredTableId(void* TableId) {
    return;
}
bool _Script_Engine::KismetStringTableLibrary::IsRegisteredTableEntry(void* TableId, void* Key) {
    return;
}
void* _Script_Engine::KismetStringTableLibrary::GetTableNamespace(void* TableId) {
    return;
}
void* _Script_Engine::KismetStringTableLibrary::GetRegisteredStringTables() {
    return;
}
void* _Script_Engine::KismetStringTableLibrary::GetKeysFromStringTable(void* TableId) {
    return;
}
