#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Guid.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "KismetGuidLibrary.hpp"
_Script_CoreUObject::Guid _Script_Engine::KismetGuidLibrary::NewGuid() {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::KismetGuidLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.KismetGuidLibrary");
    return result;
}
void _Script_Engine::KismetGuidLibrary::Parse_StringToGuid(void* GuidString, _Script_CoreUObject::Guid& OutGuid, bool& Success) {
    return;
}
bool _Script_Engine::KismetGuidLibrary::NotEqual_GuidGuid(_Script_CoreUObject::Guid& A, _Script_CoreUObject::Guid& B) {
    return;
}
bool _Script_Engine::KismetGuidLibrary::IsValid_Guid(_Script_CoreUObject::Guid& InGuid) {
    return;
}
void _Script_Engine::KismetGuidLibrary::Invalidate_Guid(_Script_CoreUObject::Guid& InGuid) {
    return;
}
void* _Script_Engine::KismetGuidLibrary::Conv_GuidToString(_Script_CoreUObject::Guid& InGuid) {
    return;
}
bool _Script_Engine::KismetGuidLibrary::EqualEqual_GuidGuid(_Script_CoreUObject::Guid& A, _Script_CoreUObject::Guid& B) {
    return;
}
