Pod::Spec.new do |spec|
  spec.name             = 'AdSetQDKAdSDK'
  spec.version          = '1.6.2'
  spec.summary          = 'AdSetQDKAdSDK for iOS'
  spec.description      = <<-DESC
                          HuanxiaoSDK
                          DESC
  spec.homepage         = 'https://github.com/AdHuanxiao/qd_hx_ios_sdk'
  spec.license          = { :type => 'MIT', :file => 'LICENSE' }
  spec.author           = { 'HuanxiaoSDK' => 'eddie@adhuanxiao.com' }
  spec.source           = { :git => 'https://github.com/AdHuanxiao/qd_hx_ios_sdk', :tag => spec.version.to_s }
  
  spec.ios.deployment_target = '13.0'
  spec.static_framework = true
  
  # 默认只安装基础SDK
  spec.default_subspecs = 'Core'
  

  spec.subspec 'Core' do |ss|
    ss.ios.deployment_target = '13.0'
    ss.vendored_frameworks = 'AdSetQDKAdSDK/AdSetQDKAdSDK.xcframework'
  end
end
