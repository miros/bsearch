# -*- encoding: utf-8 -*-
$:.push File.expand_path("../lib", __FILE__)
require "bsearch/version"

Gem::Specification.new do |s|
  s.name        = "bsearch"
  s.version     = Bsearch::VERSION
  s.platform    = Gem::Platform::RUBY
  s.authors     = ["miros"]
  s.email       = ["mirosm@mirosm.ru"]
  s.homepage    = ""
  s.summary     = %q{binary search}
  s.description = %q{binary search}

  s.rubyforge_project = "bsearch"

  s.files         = `git ls-files`.split("\n")
  s.test_files    = `git ls-files -- {test,spec,features}/*`.split("\n")
  s.executables   = `git ls-files -- bin/*`.split("\n").map{ |f| File.basename(f) }
  s.require_paths = ["lib"]
end
