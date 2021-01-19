#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html.
# Run `pod lib lint wallet_sdk_flutter.podspec' to validate before publishing.
#
Pod::Spec.new do |s|
  s.name             = 'wallet_sdk_flutter'
  s.version          = '0.0.1'
  s.summary          = 'Wallet SDK for sugar wallet'
  s.description      = 'Wallet SDK for sugar wallet'
  s.homepage         = 'https://github.com/Sugar-Foundation/wallet_sdk_flutter'
  s.license          = { :file => '../LICENSE' }
  s.author           = { 'Your Company' => 'email@example.com' }
  s.source           = { :path => '.' }
  s.source_files = 'Classes/**/*'
  s.public_header_files = 'Classes/**/*.h'
  s.dependency 'Flutter'
  s.vendored_frameworks = 'Bip39.framework'
  s.platform = :ios, '9.0'
  s.ios.deployment_target = '9.0'

  # Flutter.framework does not contain a i386 slice.
  s.pod_target_xcconfig = { 'DEFINES_MODULE' => 'YES', 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'i386' }
end
