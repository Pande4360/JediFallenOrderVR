#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SceneCaptureComponent.hpp"
#include "SceneCaptureComponentCube.hpp"
#include "TextureRenderTarget2D.hpp"
#include "TextureRenderTargetCube.hpp"
_Script_Engine::TextureRenderTargetCube*& _Script_Engine::SceneCaptureComponentCube::get_TextureTarget() {
    return *(_Script_Engine::TextureRenderTargetCube**)((uintptr_t)this + 0x388);
}
_Script_Engine::TextureRenderTargetCube*& _Script_Engine::SceneCaptureComponentCube::get_TextureTargetLeft() {
    return *(_Script_Engine::TextureRenderTargetCube**)((uintptr_t)this + 0x390);
}
_Script_Engine::TextureRenderTargetCube*& _Script_Engine::SceneCaptureComponentCube::get_TextureTargetRight() {
    return *(_Script_Engine::TextureRenderTargetCube**)((uintptr_t)this + 0x398);
}
float& _Script_Engine::SceneCaptureComponentCube::get_IPD() {
    return *(float*)((uintptr_t)this + 0x3a8);
}
_Script_Engine::TextureRenderTarget2D*& _Script_Engine::SceneCaptureComponentCube::get_TextureTargetODS() {
    return *(_Script_Engine::TextureRenderTarget2D**)((uintptr_t)this + 0x3a0);
}
_Script_CoreUObject::Class* _Script_Engine::SceneCaptureComponentCube::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SceneCaptureComponentCube");
    return result;
}
void _Script_Engine::SceneCaptureComponentCube::CaptureScene() {
    return;
}
