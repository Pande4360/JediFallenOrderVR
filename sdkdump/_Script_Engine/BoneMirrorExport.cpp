#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoneMirrorExport.hpp"
_Script_CoreUObject::Class* _Script_Engine::BoneMirrorExport::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BoneMirrorExport");
    return result;
}
void* _Script_Engine::BoneMirrorExport::get_BoneName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BoneMirrorExport::get_SourceBoneName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::BoneMirrorExport::get_BoneFlipAxis() {
    return (void*)((uintptr_t)this + 0x10);
}
