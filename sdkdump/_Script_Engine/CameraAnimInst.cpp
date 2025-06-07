#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "CameraAnim.hpp"
#include "CameraAnimInst.hpp"
#include "InterpGroupInst.hpp"
#include "InterpTrackInstMove.hpp"
#include "InterpTrackMove.hpp"
_Script_Engine::CameraAnim*& _Script_Engine::CameraAnimInst::get_CamAnim() {
    return *(_Script_Engine::CameraAnim**)((uintptr_t)this + 0x28);
}
_Script_Engine::InterpGroupInst*& _Script_Engine::CameraAnimInst::get_InterpGroupInst() {
    return *(_Script_Engine::InterpGroupInst**)((uintptr_t)this + 0x30);
}
float& _Script_Engine::CameraAnimInst::get_Playrate() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::CameraAnimInst::get_PlaySpace() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_Engine::InterpTrackInstMove*& _Script_Engine::CameraAnimInst::get_MoveInst() {
    return *(_Script_Engine::InterpTrackInstMove**)((uintptr_t)this + 0x70);
}
_Script_Engine::InterpTrackMove*& _Script_Engine::CameraAnimInst::get_MoveTrack() {
    return *(_Script_Engine::InterpTrackMove**)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Engine::CameraAnimInst::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CameraAnimInst");
    return result;
}
void _Script_Engine::CameraAnimInst::Stop(bool bImmediate) {
    return;
}
void _Script_Engine::CameraAnimInst::SetScale(float NewDuration) {
    return;
}
void _Script_Engine::CameraAnimInst::SetDuration(float NewDuration) {
    return;
}
