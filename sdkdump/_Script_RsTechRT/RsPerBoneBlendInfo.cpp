#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "RsBoneMask.hpp"
#include "RsPerBoneBlendInfo.hpp"
float& _Script_RsTechRT::RsPerBoneBlendInfo::get_BaseBlendTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_Engine::CurveFloat*& _Script_RsTechRT::RsPerBoneBlendInfo::get_BlendCustomCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x18);
}
_Script_RsTechRT::RsBoneMask*& _Script_RsTechRT::RsPerBoneBlendInfo::get_PerBoneBlendTimeMultipliers() {
    return *(_Script_RsTechRT::RsBoneMask**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsPerBoneBlendInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsPerBoneBlendInfo");
    return result;
}
void* _Script_RsTechRT::RsPerBoneBlendInfo::get_BlendOption() {
    return (void*)((uintptr_t)this + 0x10);
}
