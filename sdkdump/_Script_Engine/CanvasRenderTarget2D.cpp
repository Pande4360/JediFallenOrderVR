#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Canvas.hpp"
#include "CanvasRenderTarget2D.hpp"
#include "TextureRenderTarget2D.hpp"
void _Script_Engine::CanvasRenderTarget2D::UpdateResource() {
    return;
}
void* _Script_Engine::CanvasRenderTarget2D::get_OnCanvasRenderTargetUpdate() {
    return (void*)((uintptr_t)this + 0xe0);
}
int32_t& _Script_Engine::CanvasRenderTarget2D::get_DeferredSortPriority() {
    return *(int32_t*)((uintptr_t)this + 0xf0);
}
void _Script_Engine::CanvasRenderTarget2D::ReceiveUpdate(_Script_Engine::Canvas* Canvas, int32_t Width, int32_t Height) {
    return;
}
void* _Script_Engine::CanvasRenderTarget2D::get_World() {
    return (void*)((uintptr_t)this + 0xf4);
}
bool _Script_Engine::CanvasRenderTarget2D::get_bShouldClearRenderTargetOnReceiveUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0xfc + 0)) & 1 != 0;
}
void _Script_Engine::CanvasRenderTarget2D::set_bShouldClearRenderTargetOnReceiveUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xfc + 0);
    *(uint8_t*)((uintptr_t)this + 0xfc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::CanvasRenderTarget2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CanvasRenderTarget2D");
    return result;
}
void _Script_Engine::CanvasRenderTarget2D::QueueDeferredUpdate(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_Engine::CanvasRenderTarget2D::GetSize(int32_t& Width, int32_t& Height) {
    return;
}
_Script_Engine::CanvasRenderTarget2D* _Script_Engine::CanvasRenderTarget2D::CreateCanvasRenderTarget2D(_Script_CoreUObject::Object* WorldContextObject, void* CanvasRenderTarget2DClass, int32_t Width, int32_t Height) {
    return;
}
