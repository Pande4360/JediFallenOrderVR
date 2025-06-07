#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "RsBitfield_NavPermissionDetailFlags.hpp"
#include "RsBitfield_NavPermissionFlags.hpp"
#include "RsNavPermissionBlueprintLibrary.hpp"
_Script_CoreUObject::Class* _Script_Engine::RsNavPermissionBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsNavPermissionBlueprintLibrary");
    return result;
}
_Script_Engine::RsBitfield_NavPermissionFlags _Script_Engine::RsNavPermissionBlueprintLibrary::MakeFRsBitfield_NavPermissionFlags(void*& Flags) {
    return;
}
_Script_Engine::RsBitfield_NavPermissionDetailFlags _Script_Engine::RsNavPermissionBlueprintLibrary::MakeFRsBitfield_NavPermissionDetailFlags(void*& Flags) {
    return;
}
void _Script_Engine::RsNavPermissionBlueprintLibrary::BreakFRsBitfield_NavPermissionFlags(_Script_Engine::RsBitfield_NavPermissionFlags& NavPermissionFlags, void*& Flags) {
    return;
}
void _Script_Engine::RsNavPermissionBlueprintLibrary::BreakFRsBitfield_NavPermissionDetailFlags(_Script_Engine::RsBitfield_NavPermissionDetailFlags& NavPermissionDetailFlags, void*& Flags) {
    return;
}
