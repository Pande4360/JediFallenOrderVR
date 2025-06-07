#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TextureRenderTarget2D.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Canvas;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CanvasRenderTarget2D : public TextureRenderTarget2D {
    private: char pad_e0[0x20]; public:
    void* get_OnCanvasRenderTargetUpdate();
    int32_t& get_DeferredSortPriority();
    void* get_World();
    bool get_bShouldClearRenderTargetOnReceiveUpdate();
    void set_bShouldClearRenderTargetOnReceiveUpdate(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UpdateResource();
    void ReceiveUpdate(_Script_Engine::Canvas* Canvas, int32_t Width, int32_t Height);
    void QueueDeferredUpdate(_Script_CoreUObject::Object* WorldContextObject);
    void GetSize(int32_t& Width, int32_t& Height);
    _Script_Engine::CanvasRenderTarget2D* CreateCanvasRenderTarget2D(_Script_CoreUObject::Object* WorldContextObject, void* CanvasRenderTarget2DClass, int32_t Width, int32_t Height);
}; // Size: 0x100
#pragma pack(pop)
}
