#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "BlueprintSetLibrary.hpp"
_Script_CoreUObject::Class* _Script_Engine::BlueprintSetLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BlueprintSetLibrary");
    return result;
}
void _Script_Engine::BlueprintSetLibrary::SetSetPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value) {
    return;
}
int32_t _Script_Engine::BlueprintSetLibrary::Set_Length(void*& TargetSet) {
    return;
}
void _Script_Engine::BlueprintSetLibrary::Set_Union(void*& A, void*& B, void*& Result) {
    return;
}
void _Script_Engine::BlueprintSetLibrary::Set_ToArray(void*& A, void*& Result) {
    return;
}
bool _Script_Engine::BlueprintSetLibrary::Set_Remove(void*& TargetSet, int32_t& Item) {
    return;
}
void _Script_Engine::BlueprintSetLibrary::Set_RemoveItems(void*& TargetSet, void*& Items) {
    return;
}
void _Script_Engine::BlueprintSetLibrary::Set_Intersection(void*& A, void*& B, void*& Result) {
    return;
}
void _Script_Engine::BlueprintSetLibrary::Set_Difference(void*& A, void*& B, void*& Result) {
    return;
}
bool _Script_Engine::BlueprintSetLibrary::Set_Contains(void*& TargetSet, int32_t& ItemToFind) {
    return;
}
void _Script_Engine::BlueprintSetLibrary::Set_Clear(void*& TargetSet) {
    return;
}
void _Script_Engine::BlueprintSetLibrary::Set_AddItems(void*& TargetSet, void*& NewItems) {
    return;
}
void _Script_Engine::BlueprintSetLibrary::Set_Add(void*& TargetSet, int32_t& NewItem) {
    return;
}
