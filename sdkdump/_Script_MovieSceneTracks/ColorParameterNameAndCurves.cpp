#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ColorParameterNameAndCurves.hpp"
void* _Script_MovieSceneTracks::ColorParameterNameAndCurves::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieSceneTracks::ColorParameterNameAndCurves::get_RedCurve() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::ColorParameterNameAndCurves::get_GreenCurve() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_MovieSceneTracks::ColorParameterNameAndCurves::get_AlphaCurve() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_MovieSceneTracks::ColorParameterNameAndCurves::get_BlueCurve() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::ColorParameterNameAndCurves::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.ColorParameterNameAndCurves");
    return result;
}
