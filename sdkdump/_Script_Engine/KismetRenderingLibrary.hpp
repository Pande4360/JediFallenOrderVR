#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "SkelMeshSkinWeightInfo.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct Canvas;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_Engine {
struct TextureRenderTarget2D;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_Engine {
struct DrawToRenderTargetContext;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct KismetRenderingLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::Texture2D* RenderTargetCreateStaticTexture2DEditorOnly(_Script_Engine::TextureRenderTarget2D* RenderTarget, void* Name, void* CompressionSettings, void* MipSettings);
    void ReleaseRenderTarget2D(_Script_Engine::TextureRenderTarget2D* TextureRenderTarget);
    _Script_CoreUObject::Color ReadRenderTargetUV(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TextureRenderTarget2D* TextureRenderTarget, float U, float V);
    _Script_CoreUObject::LinearColor ReadRenderTargetRawUV(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TextureRenderTarget2D* TextureRenderTarget, float U, float V);
    _Script_CoreUObject::LinearColor ReadRenderTargetRawPixel(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y);
    _Script_CoreUObject::Color ReadRenderTargetPixel(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y);
    _Script_Engine::SkelMeshSkinWeightInfo MakeSkinWeightInfo(int32_t Bone0, void* Weight0, int32_t Bone1, void* Weight1, int32_t Bone2, void* Weight2, int32_t Bone3, void* Weight3);
    _Script_Engine::Texture2D* ImportFileAsTexture2D(_Script_CoreUObject::Object* WorldContextObject, void* Filename);
    _Script_Engine::Texture2D* ImportBufferAsTexture2D(_Script_CoreUObject::Object* WorldContextObject, void*& Buffer);
    void ExportTexture2D(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::Texture2D* Texture, void* FilePath, void* Filename);
    void ExportRenderTarget(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TextureRenderTarget2D* TextureRenderTarget, void* FilePath, void* Filename);
    void EndDrawCanvasToRenderTarget(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::DrawToRenderTargetContext& Context);
    void DrawMaterialToRenderTarget(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TextureRenderTarget2D* TextureRenderTarget, _Script_Engine::MaterialInterface* Material);
    _Script_Engine::TextureRenderTarget2D* CreateRenderTarget2D(_Script_CoreUObject::Object* WorldContextObject, int32_t Width, int32_t Height, void* Format);
    void ConvertRenderTargetToTexture2DEditorOnly(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TextureRenderTarget2D* RenderTarget, _Script_Engine::Texture2D* Texture);
    void ClearRenderTarget2D(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TextureRenderTarget2D* TextureRenderTarget, _Script_CoreUObject::LinearColor ClearColor);
    void BreakSkinWeightInfo(_Script_Engine::SkelMeshSkinWeightInfo InWeight, int32_t& Bone0, void*& Weight0, int32_t& Bone1, void*& Weight1, int32_t& Bone2, void*& Weight2, int32_t& Bone3, void*& Weight3);
    void BeginDrawCanvasToRenderTarget(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TextureRenderTarget2D* TextureRenderTarget, _Script_Engine::Canvas*& Canvas, _Script_CoreUObject::Vector2D& Size, _Script_Engine::DrawToRenderTargetContext& Context);
}; // Size: 0x28
#pragma pack(pop)
}
