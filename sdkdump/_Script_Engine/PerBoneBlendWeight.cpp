#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PerBoneBlendWeight.hpp"
int32_t& _Script_Engine::PerBoneBlendWeight::get_SourceIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::PerBoneBlendWeight::get_BlendWeight() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::PerBoneBlendWeight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PerBoneBlendWeight");
    return result;
}
