# SkyRaduis.podspec
Pod::Spec.new do |s|
  s.name         = "SkyRaduisView"
  s.version      = "1.0.0"
  s.summary      = "自定义view背景四边的圆角"

  s.homepage     = "https://github.com/skytoup/SkyRadiusView"
  s.license      = 'MIT'
  s.author       = { "skytoup" => "875766917@qq.com" }
  s.platform     = :ios, "7.0"
  s.ios.deployment_target = "7.0"
  s.source       = { :git => "https://github.com/skytoup/SkyRadiusView.git", :tag => s.version}
  s.source_files  = 'src/*.{h,m}'
  s.requires_arc = true
end
